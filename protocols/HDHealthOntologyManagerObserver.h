/* Generated by RuntimeBrowser.
 */

@protocol HDHealthOntologyManagerObserver <NSObject>

@optional

- (void)ontologyManagerReferenceOntologyCreated:(HDHealthOntologyManager *)arg1;
- (void)ontologyManagerReferenceOntologyFinishedUpdate:(HDHealthOntologyManager *)arg1 success:(bool)arg2 error:(NSError *)arg3;
- (void)ontologyManagerReferenceOntologyWillUpdate:(HDHealthOntologyManager *)arg1;

@end
