/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface PathPolicyManager : NSObject {
    long long  _nextPathId;
    NSMutableDictionary * _pathToPathId;
}

- (void)dealloc;
- (id)init;
- (id)pathIDForPath:(id)arg1 lookup:(bool)arg2;
- (void)removeAllEntries;

@end
