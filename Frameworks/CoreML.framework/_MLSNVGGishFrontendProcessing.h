/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface _MLSNVGGishFrontendProcessing : NSObject <MLCustomModel> {
    <MLCustomModel> * _frontendProcessingModel;
    MLModelDescription * _modelDescription;
}

@property (nonatomic, readonly) MLModelDescription *modelDescription;

- (void).cxx_destruct;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3;
- (id)modelDescription;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
