/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakeSourceScripter : NSObject <MapsSuggestionsObject> {
    MapsSuggestionsFakePullSource * _fakeSource;
    _MapsSuggestionsFakeSourceScripterStep * _previousStep;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _steps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MapsSuggestionsFakePullSource *fakeSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)_sendStep:(id)arg1;
- (void)addEntriesToAdd:(struct NSArray { Class x1; }*)arg1;
- (id)fakeSource;
- (id)initWithFakeSource:(id)arg1;
- (void)resendSameAfterSeconds:(double)arg1;
- (void)resendSameNow;
- (void)sendNextAfterSeconds:(double)arg1;
- (void)sendNextNow;
- (void)setFakeSource:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;

@end
