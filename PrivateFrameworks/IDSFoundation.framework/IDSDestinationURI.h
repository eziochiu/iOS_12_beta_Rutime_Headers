/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSDestinationURI : IDSDestination {
    IDSURI * _uri;
}

@property (nonatomic, readonly) IDSURI *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (id)initWithURIString:(id)arg1;
- (id)uri;

@end
