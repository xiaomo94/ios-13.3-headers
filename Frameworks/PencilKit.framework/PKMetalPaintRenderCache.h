/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalPaintRenderCache : NSObject <PKStrokeRenderCache> {
    NSMutableArray * _buffers;
    unsigned long long  _totalCost;
}

@property (nonatomic, readonly) NSArray *buffers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addBuffer:(id)arg1;
- (id)buffers;
- (unsigned long long)cacheCost;
- (id)init;
- (unsigned long long)inkVersion;
- (bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (bool)needsCompute;

@end
