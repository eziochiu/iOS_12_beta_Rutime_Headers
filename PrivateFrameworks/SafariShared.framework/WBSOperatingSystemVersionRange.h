/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSOperatingSystemVersionRange : NSObject {
    NSString * _family;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _maximumVersion;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _minimumVersion;
}

@property (nonatomic, readonly) NSString *family;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } maximumVersion;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } minimumVersion;

+ (id)defaultCloudBookmarksEligibleOperatingSystemRanges;
+ (id)rangeWithCloudBookmarksMigrationRampSettingsDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)family;
- (bool)includesOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1 inFamily:(id)arg2;
- (id)initWithFamily:(id)arg1 minimumVersion:(struct { long long x1; long long x2; long long x3; })arg2 maximumVersion:(struct { long long x1; long long x2; long long x3; })arg3;
- (struct { long long x1; long long x2; long long x3; })maximumVersion;
- (struct { long long x1; long long x2; long long x3; })minimumVersion;

@end
