/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudBookmarksDevice : NSObject {
    NSString * _operatingSystemFamily;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _operatingSystemVersion;
}

@property (nonatomic, readonly) NSString *operatingSystemFamily;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOperatingSystemVersion:(struct { long long x1; long long x2; long long x3; })arg1 family:(id)arg2;
- (id)operatingSystemFamily;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;

@end