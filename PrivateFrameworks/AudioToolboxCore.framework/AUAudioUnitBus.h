/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AUAudioUnitBus : NSObject {
    long long  _busType;
    double  _contextPresentationLatency;
    bool  _enabled;
    AVAudioFormat * _format;
    unsigned long long  _index;
    unsigned int  _maximumChannelCount;
    NSString * _name;
    struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { 
        struct BusPropertyObserver {} *__begin_; 
        struct BusPropertyObserver {} *__end_; 
        struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { 
            struct BusPropertyObserver {} *__value_; 
        } __end_cap_; 
    }  _observers;
    AUAudioUnit * _ownerAudioUnit;
    bool  _removingObserverWithContext;
    bool  _shouldAllocateBuffer;
    NSArray * _supportedChannelCounts;
    NSArray * _supportedChannelLayoutTags;
}

@property (nonatomic, readonly) long long busType;
@property (nonatomic) double contextPresentationLatency;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<BusPropertyObserver' */ struct  observers; /* unknown property attribute:  std::__1::allocator<BusPropertyObserver> >=^{BusPropertyObserver}}} */
@property (nonatomic, readonly) AUAudioUnit *ownerAudioUnit;
@property (nonatomic) bool shouldAllocateBuffer;
@property (nonatomic, readonly, copy) NSArray *supportedChannelLayoutTags;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (long long)busType;
- (double)contextPresentationLatency;
- (void)dealloc;
- (id)format;
- (unsigned long long)index;
- (id)initWithFormat:(id)arg1 error:(id*)arg2;
- (bool)isEnabled;
- (unsigned int)maximumChannelCount;
- (id)name;
- (struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x1; struct BusPropertyObserver {} *x2; struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x_3_1_1; } x3; })observers;
- (id)ownerAudioUnit;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setBusType:(long long)arg1;
- (void)setContextPresentationLatency:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)setFormat:(id)arg1 error:(id*)arg2;
- (void)setIndex:(unsigned long long)arg1;
- (void)setMaximumChannelCount:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setObservers:(struct vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x1; struct BusPropertyObserver {} *x2; struct __compressed_pair<BusPropertyObserver *, std::__1::allocator<BusPropertyObserver> > { struct BusPropertyObserver {} *x_3_1_1; } x3; })arg1;
- (void)setOwnerAudioUnit:(id)arg1;
- (void)setShouldAllocateBuffer:(bool)arg1;
- (void)setSupportedChannelCounts:(id)arg1;
- (bool)shouldAllocateBuffer;
- (id)supportedChannelCounts;
- (id)supportedChannelLayoutTags;

@end
