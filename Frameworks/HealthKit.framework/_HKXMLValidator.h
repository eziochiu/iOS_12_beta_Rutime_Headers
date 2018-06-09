/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKXMLValidator : NSObject {
    struct _xmlSchema { } * _xsdSchema;
}

- (void)dealloc;
- (id)initWithPathToXSD:(id)arg1;
- (id)initWithXSD:(id)arg1;
- (bool)validateXML:(id)arg1 simpleError:(id*)arg2 detailedErrors:(id*)arg3;

@end