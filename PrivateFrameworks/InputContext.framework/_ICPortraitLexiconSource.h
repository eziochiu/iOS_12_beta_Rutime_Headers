/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing> {
    PPContactNameRecordLoadingDelegate * _contactDelegate;
    PPContactStore * _contactStore;
    PPEventNameRecordLoadingDelegate * _eventDelegate;
    PPEventStore * _eventStore;
    _ICLexiconManager * _manager;
    PPNamedEntityRecordLoadingDelegate * _namedEntityDelegate;
    PPNamedEntityStore * _namedEntityStore;
}

- (void).cxx_destruct;
- (void)_handleEventRecord:(id)arg1;
- (id)_makeContactDelegate;
- (id)_makeEventDelegate;
- (id)_makeNamedEntityDelegate;
- (void)_reloadEventDataAfterReset;
- (void)_reloadNamedEntityDataAfterReset;
- (void)hibernate;
- (id)init;
- (void)startLoadingWithManager:(id)arg1;
- (void)warmUp;

@end
