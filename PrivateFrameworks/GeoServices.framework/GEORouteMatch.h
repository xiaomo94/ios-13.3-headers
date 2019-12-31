/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteMatch : NSObject {
    NSArray * _candidateSteps;
    unsigned long long  _consecutiveProgressionsOffRoute;
    GEONavigationMatchInfo * _detailedMatchInfo;
    double  _distanceFromRoute;
    double  _distanceTraveledOffRoute;
    bool  _isGoodMatch;
    bool  _isTunnelProjection;
    struct { 
        double latitude; 
        double longitude; 
    }  _locationCoordinate;
    double  _matchedCourse;
    double  _modifiedCourseAccuracy;
    double  _modifiedHorizontalAccuracy;
    GEORouteMatch * _projectedFrom;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; } * _road;
    double  _roadWidth;
    GEOComposedRoute * _route;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeCoordinate;
    unsigned long long  _stepIndex;
    NSDate * _timestamp;
    unsigned long long  _transitID;
}

@property (nonatomic, retain) NSArray *candidateSteps;
@property (nonatomic) unsigned long long consecutiveProgressionsOffRoute;
@property (nonatomic, retain) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) bool isGoodMatch;
@property (nonatomic, readonly) bool isOnParkingLotRoad;
@property (nonatomic) bool isTunnelProjection;
@property (nonatomic) struct { double x1; double x2; } locationCoordinate;
@property (nonatomic, readonly) double matchedCourse;
@property (nonatomic) double modifiedCourseAccuracy;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic, retain) GEORouteMatch *projectedFrom;
@property (nonatomic) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*road;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeCoordinate;
@property (nonatomic, readonly) bool routeMatchedToEnd;
@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) unsigned long long transitID;
@property (nonatomic, readonly) GEOComposedTransitStationRouteStep *transitStationStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *transitTripStep;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)candidateSteps;
- (unsigned long long)consecutiveProgressionsOffRoute;
- (void)dealloc;
- (id)description;
- (id)detailedMatchInfo;
- (double)distanceFromRoute;
- (double)distanceTraveledOffRoute;
- (double)fractionOfCurrentStepTraveled;
- (unsigned long long)hash;
- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 locationCoordinate:(struct { double x1; double x2; })arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringScore:(id)arg1;
- (bool)isGoodMatch;
- (bool)isOnParkingLotRoad;
- (bool)isTunnelProjection;
- (struct { double x1; double x2; })locationCoordinate;
- (double)matchedCourse;
- (double)modifiedCourseAccuracy;
- (double)modifiedHorizontalAccuracy;
- (id)projectedFrom;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)road;
- (double)roadWidth;
- (id)route;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinate;
- (bool)routeMatchBehind:(id)arg1;
- (bool)routeMatchedToEnd;
- (void)setCandidateSteps:(id)arg1;
- (void)setConsecutiveProgressionsOffRoute:(unsigned long long)arg1;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceTraveledOffRoute:(double)arg1;
- (void)setIsGoodMatch:(bool)arg1;
- (void)setIsTunnelProjection:(bool)arg1;
- (void)setLocationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setModifiedCourseAccuracy:(double)arg1;
- (void)setModifiedHorizontalAccuracy:(double)arg1;
- (void)setProjectedFrom:(id)arg1;
- (void)setRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)arg1;
- (void)setRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (void)setTransitID:(unsigned long long)arg1;
- (id)step;
- (unsigned long long)stepIndex;
- (id)timestamp;
- (unsigned long long)transitID;
- (id)transitStationStep;
- (id)transitTripStep;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;

@end
