/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int  _encodingCount;
}

+ (bool)supportsSecureCoding;

- (id)alias;
- (void)encodeWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)playerID;

@end
