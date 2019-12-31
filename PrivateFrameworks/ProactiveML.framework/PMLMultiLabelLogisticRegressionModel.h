/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLMultiLabelRegressionModelProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLModelFullyConnectedLayer * _layer;
    NSArray * _models;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)pyClass;

- (void).cxx_destruct;
- (id)classify:(id)arg1;
- (void)convertToLayerWithDataType:(int)arg1;
- (unsigned long long)count;
- (id)initWithLayer:(id)arg1;
- (id)initWithModels:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithWeightsArray:(id)arg1 andIntercept:(bool)arg2;
- (id)predict:(id)arg1;
- (id)serialize;
- (id)toPlistWithChunks:(id)arg1;

@end
