/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSSyncSettings : NSObject <NSCopying> {
    bool  _syncEnabled;
}

@property (getter=isSyncEnabled, nonatomic, readonly) bool syncEnabled;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSyncEnabled:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSyncEnabled;

@end
