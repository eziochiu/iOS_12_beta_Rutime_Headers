/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionRideSharingSearchResponse : NSObject <NSSecureCoding> {
    NSArray * _rides;
}

@property (nonatomic, retain) NSArray *rides;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rides;
- (void)setRides:(id)arg1;

@end
