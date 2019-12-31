/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration> {
    long long  _busType;
    NSMutableArray * _busses;
    bool  _countChangeable;
    struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { 
        struct BusPropertyObserver {} *__begin_; 
        struct BusPropertyObserver {} *__end_; 
        struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { 
            struct BusPropertyObserver {} *__value_; 
        } __end_cap_; 
    }  _observers;
    AUAudioUnit * _ownerAudioUnit;
}

@property (nonatomic, readonly) long long busType;
@property (nonatomic, readonly) unsigned long long count;
@property (getter=isCountChangeable, nonatomic, readonly) bool countChangeable;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<BusPropertyObserver' */ struct  observers; /* unknown property attribute:  std::__1::allocator<BusPropertyObserver> >=^{BusPropertyObserver}}} */
@property (nonatomic, readonly) AUAudioUnit *ownerAudioUnit;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (long long)busType;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)indexBusses;
- (id)init;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2;
- (id)initWithAudioUnit:(id)arg1 busType:(long long)arg2 busses:(id)arg3;
- (bool)isCountChangeable;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x1; struct BusPropertyObserver {} *x2; struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x_3_1_1; } x3; })observers;
- (id)ownerAudioUnit;
- (void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)replaceBusses:(id)arg1;
- (bool)setBusCount:(unsigned long long)arg1 error:(id*)arg2;
- (void)setObservers:(struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x1; struct BusPropertyObserver {} *x2; struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x_3_1_1; } x3; })arg1;

@end
