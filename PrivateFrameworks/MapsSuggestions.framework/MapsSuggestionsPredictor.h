/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsPredictor : NSObject <MapsSuggestionsPredictor> {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    MapsSuggestionsSignalPackCache * _signalPackCache;
    int  _tempPredictedTransportMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)sharedPredictor;

- (void).cxx_destruct;
- (void)_closeConnection;
- (void)_initCloseTimerIfNecessary;
- (bool)_openConnectionIfNecessary;
- (void)_scheduleCloseConnection;
- (void)_unscheduleCloseConnection;
- (void)cancelCapturingAnalytics;
- (void)captureActualTransportationMode:(int)arg1 originMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg2 destinationMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg3;
- (void)capturePredictedTransportationMode:(int)arg1;
- (void)dealloc;
- (id)init;
- (bool)predictedTransportModeForDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (bool)predictedTransportModeForDestinationMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 handler:(id /* block */)arg3;
- (void)storeSignalPack:(id)arg1 forMapItem:(struct GEOMapItemStorage { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; unsigned int x12; unsigned int x13; struct os_unfair_lock_s { unsigned int x_14_1_1; } x14; struct { unsigned int x_15_1_1 : 1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5 : 1; unsigned int x_15_1_6 : 1; unsigned int x_15_1_7 : 1; unsigned int x_15_1_8 : 1; unsigned int x_15_1_9 : 1; unsigned int x_15_1_10 : 1; unsigned int x_15_1_11 : 1; unsigned int x_15_1_12 : 1; unsigned int x_15_1_13 : 1; unsigned int x_15_1_14 : 1; unsigned int x_15_1_15 : 1; unsigned int x_15_1_16 : 1; unsigned int x_15_1_17 : 1; unsigned int x_15_1_18 : 1; } x15; }*)arg2;
- (struct NSString { Class x1; }*)uniqueName;

@end
