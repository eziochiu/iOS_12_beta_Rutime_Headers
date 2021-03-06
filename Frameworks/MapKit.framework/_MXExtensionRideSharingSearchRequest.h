/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionRideSharingSearchRequest : NSObject <NSSecureCoding> {
    MKMapItem * _destination;
    MKMapItem * _origin;
}

@property (nonatomic, retain) MKMapItem *destination;
@property (nonatomic, retain) MKMapItem *origin;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)origin;
- (void)setDestination:(id)arg1;
- (void)setOrigin:(id)arg1;

@end
