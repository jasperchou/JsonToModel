//
//  First.m
//  22
//  Created by 22 on 2018/12/26.
//  Copyright © 2018年 22. All rights reserved.
//

#import "First.h"


@implementation First

+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper {

    return @{@"Id":@"id",@"Discription":@"discription"};
}

+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass {
    return @{};
}

+ (instancetype)modelWithJson:(id)json {

    id model = nil;
    if ([json isKindOfClass:[NSString class]] || [json isKindOfClass:[NSDictionary class]]){
        model = [self yy_modelWithJSON:json];
    }else if([json isKindOfClass:[NSArray class]]){
        model = [NSArray yy_modelArrayWithClass:self json:json].mutableCopy;
    }
    return model;
}


@end


@implementation FirstData

+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper {

    return @{@"Id":@"id",@"Discription":@"discription"};
}

+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass {
    return @{@"questionGuides" : NSClassFromString(@"FirstDataQuestionGuides")};
}


@end


@implementation FirstDataQuestionGuides

+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper {

    return @{@"Id":@"id",@"Discription":@"discription"};
}

+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass {
    return @{@"questionPositions" : NSClassFromString(@"NSString")};
}


@end


@implementation FirstDataQuestionGuidesQuestionPositions

+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper {

    return @{@"Id":@"id",@"Discription":@"discription"};
}

+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass {
    return @{};
}


@end
