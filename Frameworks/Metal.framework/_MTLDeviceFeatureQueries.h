/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLDeviceFeatureQueries : MTLDeviceFeatureQueries {
    <MTLDeviceSPI> * _device;
    struct { 
        NSString *name; 
        long long requirement; 
        bool supported; 
    }  _featureInfo;
}

- (id)initWithDevice:(id)arg1;
- (id)nameForFeature:(long long)arg1;
- (long long)requirementForFeature:(long long)arg1;
- (bool)supportForFeature:(long long)arg1;
- (bool)supports2DLinearTexArraySPI;
- (bool)supports32bpcMSAATextures;
- (bool)supports3DASTCTextures;
- (bool)supports3DBCTextures;
- (bool)supportsASTCHDRTextureCompression;
- (bool)supportsASTCTextureCompression;
- (bool)supportsAlphaYUVFormats;
- (bool)supportsArgumentBuffersTier2;
- (bool)supportsArrayOfSamplers;
- (bool)supportsArrayOfTextures;
- (bool)supportsBCTextureCompression;
- (bool)supportsBaseVertexInstanceDrawing;
- (bool)supportsBlackOrWhiteSamplerBorderColors;
- (bool)supportsBufferWithIOSurface;
- (bool)supportsBufferlessClientStorageTexture;
- (bool)supportsCMPIndirectCommandBuffers;
- (bool)supportsCombinedMSAAStoreAndResolveAction;
- (bool)supportsConcurrentComputeDispatch;
- (bool)supportsCountingOcclusionQuery;
- (bool)supportsCustomBorderColor;
- (bool)supportsDepthClipMode;
- (bool)supportsDepthClipModeClampExtended;
- (bool)supportsExtendedXR10Formats;
- (bool)supportsExtendedYUVFormats;
- (bool)supportsFP32TessFactors;
- (bool)supportsFastMathInfNaNPropagation;
- (bool)supportsFloat16BCubicFiltering;
- (bool)supportsForceSeamsOnCubemaps;
- (bool)supportsFragmentBufferWrites;
- (bool)supportsFragmentOnlyEncoders;
- (bool)supportsGFXIndirectCommandBuffers;
- (bool)supportsGPUStatistics;
- (bool)supportsImageBlockSampleCoverageControl;
- (bool)supportsImageBlocks;
- (bool)supportsIndirectDrawAndDispatch;
- (bool)supportsIndirectStageInRegion;
- (bool)supportsIndirectTessellation;
- (bool)supportsIndirectTextures;
- (bool)supportsInvariantVertexPosition;
- (bool)supportsLargeFramebufferConfigs;
- (bool)supportsLayeredRendering;
- (bool)supportsLimitedYUVFormats;
- (bool)supportsLinearTexture2DArray;
- (bool)supportsLinearTextureFromSharedBuffer;
- (bool)supportsMSAADepthResolve;
- (bool)supportsMSAADepthResolveFilter;
- (bool)supportsMSAAStencilResolve;
- (bool)supportsMSAAStencilResolveFilter;
- (bool)supportsMemoryOrderAtomics;
- (bool)supportsMemorylessRenderTargets;
- (bool)supportsMipLevelsSmallerThanBlockSize;
- (bool)supportsMirrorClampToEdgeSamplerMode;
- (bool)supportsMutableTier1ArgumentBuffers;
- (bool)supportsNativeHardwareFP16;
- (bool)supportsNonPrivateDepthStencilTextures;
- (bool)supportsNonPrivateMSAATextures;
- (bool)supportsNonSquareTileShaders;
- (bool)supportsNonUniformThreadgroupSize;
- (bool)supportsNorm16BCubicFiltering;
- (bool)supportsOpenCLTextureWriteSwizzles;
- (bool)supportsPacked32TextureBufferWrites;
- (bool)supportsPipelineLibraries;
- (bool)supportsPlacementHeaps;
- (bool)supportsPostDepthCoverage;
- (bool)supportsProgrammableBlending;
- (bool)supportsProgrammableSamplePositions;
- (bool)supportsPublicXR10Formats;
- (bool)supportsQuadGroup;
- (bool)supportsQuadReduction;
- (bool)supportsQuadShufflesAndBroadcast;
- (bool)supportsRasterOrderGroups;
- (bool)supportsReadWriteBufferArguments;
- (bool)supportsReadWriteTextureArguments;
- (bool)supportsReadWriteTextureArgumentsTier2;
- (bool)supportsReadWriteTextureCubeArguments;
- (bool)supportsRelaxedTextureViewRequirements;
- (bool)supportsRenderPassWithoutRenderTarget;
- (bool)supportsRenderTextureWrites;
- (bool)supportsRenderToLinearTextures;
- (bool)supportsSIMDGroup;
- (bool)supportsSIMDReduction;
- (bool)supportsSIMDShufflesAndBroadcast;
- (bool)supportsSRGBwrites;
- (bool)supportsSamplerAddressModeClampToHalfBorder;
- (bool)supportsSamplerCompareFunction;
- (bool)supportsSeparateDepthStencil;
- (bool)supportsSeparateVisibilityAndShadingRate;
- (bool)supportsShaderLODAverage;
- (bool)supportsShaderMinLODClamp;
- (bool)supportsSparseTextures;
- (bool)supportsStencilFeedback;
- (bool)supportsTessellation;
- (bool)supportsTexture2DMultisampleArray;
- (bool)supportsTextureCubeArray;
- (bool)supportsTextureOutOfBoundsReads;
- (bool)supportsTextureSwizzle;
- (bool)supportsTileShaders;
- (bool)supportsVariableRateRasterization;
- (bool)supportsVertexAmplification;
- (bool)supportsViewportAndScissorArray;
- (bool)supportsYCBCRFormats;
- (bool)supportsYCBCRFormats12;
- (bool)supportsYCBCRFormatsPQ;
- (bool)supportsYCBCRFormatsXR;
- (void)validate;

@end
