/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface _ML3ValidatableDatabase : NSObject {
    NSString * _databasePath;
    unsigned long long  _queueID;
    NSObject<OS_dispatch_queue> * _validationSerialQueue;
    unsigned long long  _validationState;
}

@property (nonatomic, copy) NSString *databasePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *validationSerialQueue;
@property (nonatomic) unsigned long long validationState;

- (void).cxx_destruct;
- (bool)currentQueueIsValidationQueue;
- (id)databasePath;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (void)setDatabasePath:(id)arg1;
- (void)setValidationSerialQueue:(id)arg1;
- (void)setValidationState:(unsigned long long)arg1;
- (id)validationSerialQueue;
- (unsigned long long)validationState;

@end
