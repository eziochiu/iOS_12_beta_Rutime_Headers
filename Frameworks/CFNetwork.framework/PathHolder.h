/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface PathHolder : NSObject <NSCopying> {
    NSObject<OS_nw_path> * _path;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
