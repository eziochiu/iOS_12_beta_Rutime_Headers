/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARAnchor : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    double  _lastUpdateTimestamp;
    NSString * _name;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _referenceTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) double lastUpdateTimestamp;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } referenceTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithName:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAnchor:(id)arg1;
- (double)lastUpdateTimestamp;
- (id)name;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })referenceTransform;
- (void)setLastUpdateTimestamp:(double)arg1;
- (void)setReferenceTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;

@end
