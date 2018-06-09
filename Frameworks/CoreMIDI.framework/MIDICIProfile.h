/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDICIProfile : NSObject <NSSecureCoding> {
    NSString * name;
    NSData * profileID;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *profileID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 name:(id)arg2;
- (bool)isEqualTo:(id)arg1;
- (id)name;
- (id)profileID;
- (const void*)rawData;

@end
