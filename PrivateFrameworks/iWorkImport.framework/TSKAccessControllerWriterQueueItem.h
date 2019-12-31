/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAccessControllerWriterQueueItem : NSObject {
    struct NSThread { Class x1; id x2; unsigned char x3[44]; } * _threadIdentifier;
}

@property (nonatomic, readonly) bool didTakePriority;
@property (nonatomic, readonly) NSThread *threadIdentifier;

+ (id)priorityPrimaryThreadWriterQueueItemForAccessController:(id)arg1;
+ (id)writerQueueItemWithThreadIdentifier:(struct NSThread { Class x1; id x2; unsigned char x3[44]; }*)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)didTakePriority;
- (id)initWithThreadIdentifier:(struct NSThread { Class x1; id x2; unsigned char x3[44]; }*)arg1;
- (struct NSThread { Class x1; id x2; unsigned char x3[44]; }*)threadIdentifier;

@end
