/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTapToRadarRequest : NSObject {
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _message;
    NSString * _relatedRadar;
    NSString * _uuid;
}

@property (nonatomic, retain) NSString *componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *relatedRadar;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (id)message;
- (id)relatedRadar;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRelatedRadar:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
