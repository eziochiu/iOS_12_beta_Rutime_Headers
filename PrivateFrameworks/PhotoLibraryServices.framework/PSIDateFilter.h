/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIDateFilter : NSObject {
    PSIDate * _endDate;
    PSIDate * _singleDate;
    PSIDate * _startDate;
}

@property (readonly) PSIDate *endDate;
@property (readonly) PSIDate *singleDate;
@property (readonly) PSIDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (id)initWithEndDateComponents:(id)arg1;
- (id)initWithSingleDateComponents:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;
- (id)singleDate;
- (id)startDate;

@end
