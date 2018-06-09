/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISDisplayContext : NSObject <BSXPCCoding, NSCopying, NSMutableCopying> {
    unsigned long long  _artworkSubtype;
    FBSDisplayConfiguration * _displayConfiguration;
}

@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithDisplayContext:(id)arg1;
- (unsigned long long)artworkSubtype;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayConfiguration;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
