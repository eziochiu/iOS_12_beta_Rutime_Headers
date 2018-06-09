/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLMicroLocation : NSObject {
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSUUID *uuid;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (id)uuid;

@end
