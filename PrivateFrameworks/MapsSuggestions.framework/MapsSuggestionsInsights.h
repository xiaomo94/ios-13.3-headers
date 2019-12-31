/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsInsights : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    MapsSuggestionsFwdGeocodingRelevanceScoreProvider * _fwdGeoCodingRoutineScoreProvider;
    MapsSuggestionsPortraitRelevanceScoreProvider * _portraitScoreProvider;
    struct Queue { 
        NSObject<OS_dispatch_queue> *_innerQueue; 
        NSString *_name; 
    }  _queue;
    MapsSuggestionsRelevanceScorer * _relevanceScorer;
    MapsSuggestionsRoutineRelevanceScoreProvider * _routineScoreProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)sharedInsights;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_closeConnection;
- (void)_initCloseTimerIfNecessary;
- (bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_unscheduleCloseConnection;
- (id)confidenceScoresForContacts:(id)arg1 addresses:(id)arg2;
- (id)confidenceScoresForMapItems:(id)arg1;
- (void)dealloc;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (id)init;
- (double)isTouristHere;
- (void)preload;
- (id)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (bool)signalPackForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (id)signalPackForDestinationMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
- (bool)signalPackForDestinationMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (id)signalPackForHere;
- (bool)signalPackForHereWithHandler:(id /* block */)arg1;
- (struct NSString { Class x1; }*)uniqueName;

@end
