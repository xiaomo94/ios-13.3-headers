/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList> {
    IKDOMNode * _contextNode;
    id /* block */  _evaluationBlock;
    NSArray * _nodes;
}

@property (nonatomic, retain) IKDOMNode *contextNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ evaluationBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long length;
@property (nonatomic, copy) NSArray *nodes;
@property (readonly) Class superclass;

+ (id)nodeListWithAppContext:(id)arg1 contextNode:(id)arg2 xpath:(id)arg3;

- (void).cxx_destruct;
- (void)_updateNodes;
- (id)contextNode;
- (void)domDidUpdateForContextNode:(id)arg1;
- (id /* block */)evaluationBlock;
- (id)initWithAppContext:(id)arg1 contextNode:(id)arg2 evaluationBlock:(id /* block */)arg3;
- (id)item:(long long)arg1;
- (long long)length;
- (id)nodes;
- (void)setContextNode:(id)arg1;
- (void)setNodes:(id)arg1;

@end
