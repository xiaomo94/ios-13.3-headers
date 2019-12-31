/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWUBInferenceControllerConfiguration : BWStillImageProcessorConfiguration {
    unsigned int  _figThreadPriority;
    BWInferenceScheduler * _inferenceScheduler;
    BWVideoFormat * _inputFormat;
    bool  _redEyeReductionEnabled;
    bool  _semanticRenderingEnabled;
}

@property (nonatomic) unsigned int figThreadPriority;
@property (nonatomic, retain) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic, retain) BWVideoFormat *inputFormat;
@property (nonatomic) bool redEyeReductionEnabled;
@property (nonatomic) bool semanticRenderingEnabled;

- (void)dealloc;
- (unsigned int)figThreadPriority;
- (id)inferenceScheduler;
- (id)inputFormat;
- (bool)redEyeReductionEnabled;
- (bool)semanticRenderingEnabled;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setInferenceScheduler:(id)arg1;
- (void)setInputFormat:(id)arg1;
- (void)setRedEyeReductionEnabled:(bool)arg1;
- (void)setSemanticRenderingEnabled:(bool)arg1;

@end
