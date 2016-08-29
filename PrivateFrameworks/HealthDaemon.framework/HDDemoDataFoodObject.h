/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataFoodObject : NSObject <NSSecureCoding> {
    NSString * _brandName;
    long long  _foodType;
    NSString * _genericName;
    NSDictionary * _nutritionFacts;
    double  _recommendedNumServings;
}

@property (nonatomic, copy) NSString *brandName;
@property (nonatomic) long long foodType;
@property (nonatomic, copy) NSString *genericName;
@property (nonatomic, copy) NSDictionary *nutritionFacts;
@property (nonatomic) double recommendedNumServings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brandName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)foodType;
- (id)genericName;
- (id)initWithBrandName:(id)arg1 genericName:(id)arg2 foodType:(long long)arg3 nutritionFacts:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)nutritionFacts;
- (double)recommendedNumServings;
- (void)setBrandName:(id)arg1;
- (void)setFoodType:(long long)arg1;
- (void)setGenericName:(id)arg1;
- (void)setNutritionFacts:(id)arg1;
- (void)setRecommendedNumServings:(double)arg1;

@end