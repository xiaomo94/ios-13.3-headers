/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsFakeLocationUpdater : MapsSuggestionsBaseLocationUpdater <MapsSuggestionsLocationUpdater> {
    unsigned long long  _calledStartImplementation;
    unsigned long long  _calledStopImplementation;
    bool  _isRunning;
}

@property (nonatomic, readonly) unsigned long long calledStartImplementation;
@property (nonatomic, readonly) unsigned long long calledStopImplementation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRunning;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (unsigned long long)calledStartImplementation;
- (unsigned long long)calledStopImplementation;
- (bool)isRunning;
- (void)sendLocation:(id)arg1;
- (void)sendVisit:(id)arg1;
- (void)startImplemention;
- (void)stopImplementation;

@end
