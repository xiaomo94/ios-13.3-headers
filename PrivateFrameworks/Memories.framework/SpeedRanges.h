/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface SpeedRanges : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray * _array;
    NSObject<SpeedRangeDelegate> * _delegate;
    int  _editCount;
    int  _mediaDuration;
    SpeedRanges * _old;
    SpeedRanges * _ramped;
}

@property (nonatomic, retain) NSMutableArray *array;
@property (nonatomic) NSObject<SpeedRangeDelegate> *delegate;
@property int editCount;
@property (nonatomic, readonly) bool isEdited;
@property (nonatomic) int mediaDuration;
@property (nonatomic, retain) SpeedRanges *old;
@property (nonatomic, retain) SpeedRanges *ramped;

+ (id)objectFromPlist:(id)arg1;
+ (void)rangesFromSloMoAsset:(id)arg1 userAdjustedOnly:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_removeBackToBackFreezes;
- (void)addObject:(id)arg1;
- (id)array;
- (int)clipTimeForMediaTime:(int)arg1;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)delegate;
- (id)description;
- (void)didChange;
- (int)editCount;
- (id)firstObject;
- (void)forwardInvocation:(id)arg1;
- (id)generateRamps;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)init;
- (id)initWithDuration:(int)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEdited;
- (id)lastObject;
- (int)mapClipTime:(int)arg1 fromMap:(id)arg2;
- (int)mediaDuration;
- (float)mediaTimeFloatForClipTime:(int)arg1;
- (int)mediaTimeForClipTime:(int)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)old;
- (id)plistRepresentation;
- (id)ramped;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeShortRanges;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setArray:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditCount:(int)arg1;
- (id)setFromAdjustmentData:(id)arg1;
- (void)setMediaDuration:(int)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setOld:(id)arg1;
- (void)setRamped:(id)arg1;
- (id)speedRangeAtClipTime:(int)arg1;
- (void)testRamps;
- (void)testUberRamp;
- (void)updateLinks;
- (void)willChange;

@end
