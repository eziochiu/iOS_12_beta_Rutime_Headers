/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARReply : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _geoSessionEntityString;
    NSURLRequest * _httpRequest;
    NSURLResponse * _httpResponse;
    NSArray * _localSuggestions;
    NSArray * _rawResponse;
    double  _scale;
    PARTask * _task;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, copy) NSString *geoSessionEntityString;
@property (nonatomic, retain) NSURLRequest *httpRequest;
@property (nonatomic, retain) NSURLResponse *httpResponse;
@property (nonatomic, retain) NSArray *localSuggestions;
@property (nonatomic, retain) NSArray *rawResponse;
@property (nonatomic) double scale;
@property (nonatomic) PARTask *task;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)geoSessionEntityString;
- (id)httpRequest;
- (id)httpResponse;
- (id)initWithCoder:(id)arg1;
- (id)localSuggestions;
- (id)rawResponse;
- (double)scale;
- (void)setData:(id)arg1;
- (void)setGeoSessionEntityString:(id)arg1;
- (void)setHttpRequest:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setLocalSuggestions:(id)arg1;
- (void)setRawResponse:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
