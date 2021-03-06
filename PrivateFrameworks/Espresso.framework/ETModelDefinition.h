/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETModelDefinition : NSObject {
    NSArray * _inputs;
    NSArray * _layerNames;
    NSURL * _modelURL;
    NSArray * _outputs;
}

@property (readonly) NSArray *inputs;
@property (readonly) NSArray *layerNames;
@property (readonly) NSURL *modelURL;
@property (readonly) NSArray *outputs;

- (void).cxx_destruct;
- (id)initWithInferenceNetworkPath:(id)arg1 error:(id*)arg2;
- (id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id*)arg4;
- (id)inputs;
- (id)layerNames;
- (id)modelURL;
- (id)outputs;

@end
