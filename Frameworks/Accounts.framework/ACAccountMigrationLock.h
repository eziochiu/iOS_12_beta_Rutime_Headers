/* made by EzioChiu
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountMigrationLock : NSObject <NSLocking> {
    CPExclusiveLock * _underlyingLock;
}

+ (id)_currentSystemVersion;
+ (bool)isMigrationFinished;
+ (void)signalMigrationFinished;
+ (void)writeMigrationVersionPref;

- (void).cxx_destruct;
- (id)init;
- (void)lock;
- (void)unlock;

@end
