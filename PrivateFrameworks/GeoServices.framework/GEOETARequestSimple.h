/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARequestSimple : GEOXPCRequest <GEOXPCRequest> {
    int  _mode;
    GEOETARequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mode;
@property (nonatomic, retain) GEOETARequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectsReply;
- (id)initWithCoder:(id)arg1;
- (bool)isValid;
- (int)mode;
- (id)request;
- (void)setMode:(int)arg1;
- (void)setRequest:(id)arg1;

@end
