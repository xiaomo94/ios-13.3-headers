/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXActionPredictionContainer : NSObject <ATXScoredPredictionProtocol, NSCopying> {
    NSString * _actionKey;
    _PASLock * _lock;
    ATXMinimalSlotResolutionParameters * _parameters;
    struct ATXPredictionItem { 
        NSString *key; 
        unsigned long long actionHash; 
        float inputSignals[437]; 
        float score; 
    }  _predictionItem;
}

@property (nonatomic, readonly) NSString *actionKey;
@property (nonatomic) struct ATXPredictionItem { id x1; unsigned long long x2; float x3[437]; float x4; } predictionItem;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)actionKey;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithMinimalSlotResolutionParameters:(id)arg1 score:(float)arg2 actionKey:(id)arg3;
- (id)initWithScoredAction:(struct ATXScoredPrediction { Class x1; }*)arg1 slotSet:(id)arg2 actionKey:(id)arg3;
- (id)initWithScoredAction:(struct ATXScoredPrediction { Class x1; }*)arg1 slotSet:(id)arg2 minimalSlotResolutionParameters:(id)arg3 score:(float)arg4 actionKey:(id)arg5 predictionItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[437]; float x4; })arg6;
- (void)initializeScoredActionAndSlotSet;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionPredictionContainer:(id)arg1;
- (struct ATXPredictionItem { id x1; unsigned long long x2; float x3[437]; float x4; })predictionItem;
- (float)score;
- (struct ATXScoredPrediction { Class x1; }*)scoredAction;
- (void)setPredictionItem:(struct ATXPredictionItem { id x1; unsigned long long x2; float x3[437]; float x4; })arg1;
- (void)setScore:(float)arg1;
- (id)slotSet;

@end
