/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNAlignFaceRectangleRequest : VNRequest {
    NSArray * _inputFaceObservations;
}

@property (nonatomic, readonly, copy) NSArray *inputFaceObservations;

+ (Class)configurationClass;

- (void).cxx_destruct;
- (void)_determineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3;
- (id)initWithFaceObservations:(id)arg1;
- (id)initWithFaceObservations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)inputFaceObservations;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultRequestInstance;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
