/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.SRIngestor : NSObject {
    void bundleID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    void db;
    void direction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dkEventUUID;
    void engagementSignals;
    void inintentHandlingStatus;
    void intent;
    void intentUUID;
}

+ (void)backfillInteractionsWithHandler:(id /* block */)arg1;
+ (void)saveInteraction:(id)arg1 dkEventUUID:(id)arg2;

- (void).cxx_destruct;
- (id)init;

@end
