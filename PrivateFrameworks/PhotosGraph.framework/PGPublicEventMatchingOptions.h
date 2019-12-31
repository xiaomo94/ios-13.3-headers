/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPublicEventMatchingOptions : NSObject {
    NSDateInterval * _actualAttendanceDateInterval;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinates;
    NSDateInterval * _expandedAttendanceDateInterval;
    PGMeaningfulEventMatchingCriteria * _matchingCriteria;
    PGGraphMomentNode * _momentNode;
    <CLSTimeLocationTuple> * _timeLocationTuple;
}

@property (nonatomic, readonly) NSDateInterval *actualAttendanceDateInterval;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinates;
@property (nonatomic, readonly) NSDateInterval *expandedAttendanceDateInterval;
@property (nonatomic, readonly) PGMeaningfulEventMatchingCriteria *matchingCriteria;
@property (nonatomic, readonly) PGGraphMomentNode *momentNode;
@property (nonatomic, readonly) <CLSTimeLocationTuple> *timeLocationTuple;

- (void).cxx_destruct;
- (void)_createAttendanceDateIntervals;
- (id)actualAttendanceDateInterval;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinates;
- (id)expandedAttendanceDateInterval;
- (id)initWithTimeLocationTuple:(id)arg1 momentNode:(id)arg2;
- (id)matchingCriteria;
- (id)momentNode;
- (id)timeLocationTuple;

@end
