/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNSoundClassifier : NSObject <SNAnalyzing> {
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
    MLModel * _model;
    int  _modelBlockSize;
    double  _overlapFactor;
    int  _primeFrameCount;
    int  _resultsToDiscardCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; } graph;
@property (readonly) unsigned long long hash;
@property double overlapFactor;
@property (readonly) int primeFrameCount;
@property (nonatomic, readonly) struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; /* Warning: unhandled struct encoding: '{basic_string<char' */ struct x5; }*resultsBox; /* unknown property attribute:  int)>}}}BBBBq} */
@property (readonly) Class superclass;

+ (void)completeTimingInfoInResult:(id)arg1 usingBox:(struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; long long x6; struct vector<DSPGraph::InputPort, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_7_1_1; struct InputPort {} *x_7_1_2; struct __compressed_pair<DSPGraph::InputPort *, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_3_2_1; } x_7_1_3; } x7; struct vector<DSPGraph::OutputPort, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_8_1_1; struct OutputPort {} *x_8_1_2; struct __compressed_pair<DSPGraph::OutputPort *, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_3_2_1; } x_8_1_3; } x8; }*)arg2 modelBlockSize:(long long)arg3;
+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adaptToSystemConfiguration:(id)arg1 error:(id*)arg2;
- (struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })graph;
- (id)init;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (double)overlapFactor;
- (int)primeFrameCount;
- (void)primeGraph;
- (struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; long long x6; struct vector<DSPGraph::InputPort, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_7_1_1; struct InputPort {} *x_7_1_2; struct __compressed_pair<DSPGraph::InputPort *, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_3_2_1; } x_7_1_3; } x7; struct vector<DSPGraph::OutputPort, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_8_1_1; struct OutputPort {} *x_8_1_2; struct __compressed_pair<DSPGraph::OutputPort *, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_3_2_1; } x_8_1_3; } x8; }*)resultsBox;
- (id)resultsFromBox:(struct Box { int (**x1)(); struct Graph {} *x2; struct IsoGroup {} *x3; struct Subset {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; long long x6; struct vector<DSPGraph::InputPort, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_7_1_1; struct InputPort {} *x_7_1_2; struct __compressed_pair<DSPGraph::InputPort *, std::__1::allocator<DSPGraph::InputPort> > { struct InputPort {} *x_3_2_1; } x_7_1_3; } x7; struct vector<DSPGraph::OutputPort, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_8_1_1; struct OutputPort {} *x_8_1_2; struct __compressed_pair<DSPGraph::OutputPort *, std::__1::allocator<DSPGraph::OutputPort> > { struct OutputPort {} *x_3_2_1; } x_8_1_3; } x8; }*)arg1 renderedWithFrameCount:(int)arg2;
- (void)setOverlapFactor:(double)arg1;
- (id)sharedProcessorConfiguration;

@end
