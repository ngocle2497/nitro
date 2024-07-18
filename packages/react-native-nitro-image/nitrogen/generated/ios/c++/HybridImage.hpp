///
/// HybridImage.hpp
/// Thu Jul 18 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed react-native-nitro properly?
#endif

#include "PixelFormat.hpp"
#include "ImageFormat.hpp"

using namespace margelo::nitro;

/**
 * An abstract base class for `Image` (Image.nitro.ts)
 * Inherit this class to create instances of `HybridImage` in C++.
 * @example
 * ```cpp
 * class Image: public HybridImage {
 *   // ...
 * };
 * ```
 */
class HybridImage: public HybridObject {
  public:
    // Constructor
    explicit HybridImage(): HybridObject(TAG) { }

  public:
    // Properties
    virtual double getWidth() = 0;
    virtual double getHeight() = 0;
    virtual PixelFormat getPixelFormat() = 0;

  public:
    // Methods
    virtual std::shared_ptr<ArrayBuffer> toArrayBuffer(ImageFormat format) = 0;

  protected:
    // Tag for logging
    static constexpr auto TAG = "Image";

  private:
    // Hybrid Setup
    void loadHybridMethods() override;
};