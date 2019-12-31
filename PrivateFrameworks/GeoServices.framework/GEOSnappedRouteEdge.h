/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSnappedRouteEdge : NSObject {
    bool  _clippedBack;
    bool  _clippedFront;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _localBounds;
    struct shared_ptr<geo::MapEdgeRoad> { 
        struct MapEdgeRoad {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _mapEdge;
    unsigned long long  _mapEdgeOffset;
    struct vector<GEOPosition2f, std::__1::allocator<GEOPosition2f> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOPosition2f *, std::__1::allocator<GEOPosition2f> > { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _points;
    struct vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate> > { 
        struct PolylineCoordinate {} *__begin_; 
        struct PolylineCoordinate {} *__end_; 
        struct __compressed_pair<geo::PolylineCoordinate *, std::__1::allocator<geo::PolylineCoordinate> > { 
            struct PolylineCoordinate {} *__value_; 
        } __end_cap_; 
    }  _routeOffsets;
}

@property (nonatomic, readonly) bool clippedBack;
@property (nonatomic, readonly) bool clippedFront;
@property (nonatomic, readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*feature;
@property (nonatomic, readonly) struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad {} *x1; struct __shared_weak_count {} *x2; } mapEdge;
@property (nonatomic, readonly) unsigned long long mapEdgeOffset;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (nonatomic, readonly) struct { float x1; float x2; }*points;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffsetA;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffsetB;
@property (nonatomic, readonly) struct PolylineCoordinate { unsigned int x1; float x2; }*routeOffsets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 andB:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 overLength:(float)arg3 onRoute:(id)arg4;
- (bool)clippedBack;
- (bool)clippedFront;
- (id)description;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned short x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)feature;
- (id)initWithRoadPath:(const struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > { int (**x1)(); int x2; unsigned long long x3; struct shared_ptr<geo::MapEdge> { struct MapEdge {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct GeoPolyline { struct shared_ptr<const std::__1::vector<zilch::GeoCoordinates, std::__1::allocator<zilch::GeoCoordinates> > > { struct vector<zilch::GeoCoordinates, std::__1::allocator<zilch::GeoCoordinates> > {} *x_1_2_1; struct __shared_weak_count {} *x_1_2_2; } x_5_1_1; int x_5_1_2; } x5; int x6; }*)arg1 sectionRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad {} *x1; struct __shared_weak_count {} *x2; })mapEdge;
- (unsigned long long)mapEdgeOffset;
- (unsigned long long)pointCount;
- (struct { float x1; float x2; }*)points;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffsetA;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffsetB;
- (struct PolylineCoordinate { unsigned int x1; float x2; }*)routeOffsets;

@end
