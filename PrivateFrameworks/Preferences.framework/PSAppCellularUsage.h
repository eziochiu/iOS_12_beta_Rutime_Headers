/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAppCellularUsage : PSCellularUsage {
    NSString * _bundleID;
    NSString * _displayName;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *displayName;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)setBundleID:(id)arg1;
- (void)setDisplayName:(id)arg1;

@end
