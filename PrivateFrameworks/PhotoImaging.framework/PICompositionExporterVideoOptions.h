/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions {
    bool  _bypassOutputSettingsIfNoComposition;
    bool  _increaseBitRateIfNecessary;
    id /* block */  _metadataProcessor;
}

@property (nonatomic) bool bypassOutputSettingsIfNoComposition;
@property (nonatomic) bool increaseBitRateIfNecessary;
@property (copy) id /* block */ metadataProcessor;

- (void).cxx_destruct;
- (bool)bypassOutputSettingsIfNoComposition;
- (bool)increaseBitRateIfNecessary;
- (id /* block */)metadataProcessor;
- (void)setBypassOutputSettingsIfNoComposition:(bool)arg1;
- (void)setIncreaseBitRateIfNecessary:(bool)arg1;
- (void)setMetadataProcessor:(id /* block */)arg1;

@end
