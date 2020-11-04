/**
 * ALICE Bookkeeping
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 0.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * FlpApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_FlpApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_FlpApi_H_


#include "../ApiClient.h"

#include "ArrayOfFlpsResponse.h"
#include "Errors.h"
#include "FlpResponse.h"
#include "FlpSortOptions.h"
#include "PaginationOptions.h"


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  FlpApi 
{
public:

    explicit FlpApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~FlpApi();

    /// <summary>
    /// Gets a flp by Id
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="flpId">The id of the flp to retrieve</param>
    pplx::task<std::shared_ptr<FlpResponse>> getFlpById(
        int64_t flpId
    ) const;
    /// <summary>
    /// List all flps
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="page">Specifies the pagination requirements. (optional, default to new PaginationOptions())</param>
    /// <param name="sort">Specifies the flp sorting requirements. (optional, default to new FlpSortOptions())</param>
    pplx::task<std::shared_ptr<ArrayOfFlpsResponse>> listFlps(
        boost::optional<std::shared_ptr<PaginationOptions>> page,
        boost::optional<std::shared_ptr<FlpSortOptions>> sort
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_FlpApi_H_ */
