/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAssistantPresentationObservationToken : SBPresentationObservationToken <SBAssistantObserver> {
    SBAssistantController * _assistantController;
}

@property (nonatomic, readonly) SBAssistantController *assistantController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assistantController;
- (void)assistantDidAppear:(id)arg1;
- (void)assistantDidDisappear:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)assistantWillDisappear:(id)arg1;
- (void)dealloc;
- (id)initWithAssistantController:(id)arg1;
- (long long)state;

@end
