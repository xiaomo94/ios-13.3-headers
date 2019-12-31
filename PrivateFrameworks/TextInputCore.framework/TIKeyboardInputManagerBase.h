/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerBase : NSObject {
    bool  _hasHandledInput;
    TIInputMode * _inputMode;
}

@property (nonatomic, readonly) NSString *currentInputModeIdentifier;
@property (nonatomic, readonly) bool hasHandledInput;
@property (nonatomic, readonly) TIInputMode *inputMode;

- (void).cxx_destruct;
- (void)addSynthesizedTouchToInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (void)candidateRejected:(id)arg1;
- (void)candidatesOfferedFeedback:(id)arg1 keyboardState:(id)arg2;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (id)currentInputModeIdentifier;
- (long long)deletionCountForString:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 candidateHandler:(id)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (id)generateRefinementsForCandidate:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (bool)hasHandledInput;
- (id)humanReadableTrace;
- (id)init;
- (id)initWithInputMode:(id)arg1 keyboardState:(id)arg2;
- (id)inputMode;
- (bool)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)resourceInputModes;
- (void)resume;
- (void)runMaintenanceTask;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })smartSelectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(bool)arg2 withInput:(id)arg3;

@end
