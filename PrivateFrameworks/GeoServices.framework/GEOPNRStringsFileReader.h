/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPNRStringsFileReader : NSObject {
    NSDictionary * _offsetForLang;
    NSData * _stringsFile;
    NSArray * _supportedLanguages;
}

@property (nonatomic, readonly, retain) NSDictionary *offsetForLang;
@property (nonatomic, readonly, retain) NSData *stringsFile;
@property (nonatomic, readonly, retain) NSArray *supportedLanguages;

- (void).cxx_destruct;
- (id)initWithFile:(id)arg1;
- (id)offsetForLang;
- (id)stringForLang:(id)arg1 withId:(unsigned int)arg2;
- (id)stringsFile;
- (id)supportedLanguages;

@end
