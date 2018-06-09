/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterBrowserFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    NSURL * _parentURL;
    NSURLRequest * _request;
    NSURLResponse * _response;
}

@property (retain) NSURL *parentURL;
@property (retain) NSURLRequest *request;
@property (retain) NSURLResponse *response;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 parentURL:(id)arg2 sourceAppIdentifier:(id)arg3;
- (id)parentURL;
- (id)request;
- (id)response;
- (void)setParentURL:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;

@end
